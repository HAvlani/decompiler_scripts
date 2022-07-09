
char * parse_user_spec_warn
                 (char *spec,uid_t *uid,gid_t *gid,char **username,char **groupname,_Bool *pwarn)

{
  _Bool _Var1;
  char *pcVar2;
  char *pcVar3;
  
  if (gid == (gid_t *)0x0) {
    pcVar3 = parse_with_separator(spec,(char *)0x0,uid,(gid_t *)0x0,username,groupname);
  }
  else {
    pcVar2 = strchr(spec,0x3a);
    pcVar3 = parse_with_separator(spec,pcVar2,uid,gid,username,groupname);
    if ((((pcVar2 == (char *)0x0) && (pcVar3 != (char *)0x0)) &&
        (pcVar2 = strchr(spec,0x2e), pcVar2 != (char *)0x0)) &&
       (pcVar2 = parse_with_separator(spec,pcVar2,uid,gid,username,groupname), pcVar2 == (char *)0x0
       )) {
      _Var1 = true;
      pcVar3 = "warning: \'.\' should be \':\'";
      if (pwarn == (_Bool *)0x0) {
        return (char *)0x0;
      }
      goto LAB_00105de0;
    }
  }
  if (pwarn == (_Bool *)0x0) {
    return pcVar3;
  }
  _Var1 = false;
LAB_00105de0:
  *pwarn = _Var1;
  return pcVar3;
}

