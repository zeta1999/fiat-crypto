Require Import Coq.Classes.Morphisms.
Require Import Crypto.Util.Tactics.
Require Import Crypto.Algebra.

Section Monoid.
  Context {T eq op id} {monoid:@monoid T eq op id}.
  Local Infix "=" := eq : type_scope. Local Notation "a <> b" := (not (a = b)) : type_scope.
  Local Infix "*" := op.
  Local Infix "=" := eq : eq_scope.
  Local Open Scope eq_scope.

  Lemma cancel_right z iz (Hinv:op z iz = id) :
    forall x y, x * z = y * z <-> x = y.
  Proof.
    split; intros.
    { assert (op (op x z) iz = op (op y z) iz) as Hcut by (rewrite_hyp ->!*; reflexivity).
      rewrite <-associative in Hcut.
      rewrite <-!associative, !Hinv, !right_identity in Hcut; exact Hcut. }
    { rewrite_hyp ->!*. reflexivity. }
  Qed.

  Lemma cancel_left z iz (Hinv:op iz z = id) :
    forall x y, z * x = z * y <-> x = y.
  Proof.
    split; intros.
    { assert (op iz (op z x) = op iz (op z y)) as Hcut by (rewrite_hyp ->!*; reflexivity).
      rewrite !associative, !Hinv, !left_identity in Hcut; exact Hcut. }
    { rewrite_hyp ->!*; reflexivity. }
  Qed.

  Lemma inv_inv x ix iix : ix*x = id -> iix*ix = id -> iix = x.
  Proof.
    intros Hi Hii.
    assert (H:op iix id = op iix (op ix x)) by (rewrite Hi; reflexivity).
    rewrite associative, Hii, left_identity, right_identity in H; exact H.
  Qed.

  Lemma inv_op x y ix iy : ix*x = id -> iy*y = id -> (iy*ix)*(x*y) =id.
  Proof.
    intros Hx Hy.
    cut (iy * (ix*x) * y = id); try intro H.
    { rewrite <-!associative; rewrite <-!associative in H; exact H. }
    rewrite Hx, right_identity, Hy. reflexivity.
  Qed.

End Monoid.

Section Homomorphism.
  Context {T  EQ OP ID} {monoidT:  @monoid T  EQ OP ID }.
  Context {T' eq op id} {monoidT': @monoid T' eq op id }.
  Context {phi:T->T'}.
  Local Infix "=" := eq. Local Infix "=" := eq : type_scope.
  Class is_homomorphism :=
    {
      homomorphism : forall a b,  phi (OP a b) = op (phi a) (phi b);

      is_homomorphism_phi_proper : Proper (respectful EQ eq) phi
    }.
  Global Existing Instance is_homomorphism_phi_proper.
End Homomorphism.