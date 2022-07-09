
void beyond(void)

{
  char *pcVar1;
  char *format;
  
  pcVar1 = quote(argv[(long)argc + -1]);
  format = (char *)dcgettext(0,"missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(format,pcVar1);
}

