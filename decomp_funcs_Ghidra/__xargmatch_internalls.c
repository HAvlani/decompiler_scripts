
ptrdiff_t __xargmatch_internal
                    (char *context,char *arg,char **arglist,void *vallist,size_t valsize,
                    argmatch_exit_fn *exit_fn,_Bool allow_abbreviation)

{
  ptrdiff_t problem;
  
  if (allow_abbreviation == false) {
    problem = argmatch_exact(arg,arglist);
  }
  else {
    problem = argmatch(arg,arglist,vallist,valsize);
  }
  if (problem < 0) {
    argmatch_invalid(context,arg,problem);
    argmatch_valid(arglist,vallist,valsize);
    (*exit_fn)();
    problem = -1;
  }
  return problem;
}

