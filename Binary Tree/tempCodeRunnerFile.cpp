bool Issymatric (Node * root )
{

  return root ==NULL || Symatriccheck (root -> right , root -> left);


}