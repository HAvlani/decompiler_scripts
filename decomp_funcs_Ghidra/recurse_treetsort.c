
_Bool recurse_tree(item *root,anon_subr__Bool_item_ptr *action)

{
  _Bool _Var1;
  
  while( true ) {
    if (root->left == (item *)0x0) {
      if (root->right == (item *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        _Var1 = (*action)(root);
        return _Var1;
      }
    }
    else {
      _Var1 = recurse_tree(root->left,action);
      if (_Var1 != false) {
        return true;
      }
    }
    _Var1 = (*action)(root);
    if (_Var1 != false) break;
    root = root->right;
    if (root == (item *)0x0) {
      return false;
    }
  }
  return true;
}

