
void badfieldspec(char *spec,char *msgid)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = quote(spec);
  uVar2 = dcgettext(0,msgid,5);
  uVar3 = dcgettext(0,"%s: invalid field specification %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar3,uVar2,pcVar1);
}

