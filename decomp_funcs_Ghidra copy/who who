
void who(char *filename,int options)

{
  char cVar1;
  FILE *pFVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  char *idle;
  char *time_str;
  char *line;
  char *user;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  STRUCT_UTMP *pSVar19;
  undefined1 *puVar20;
  time_t boottime;
  short sVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  undefined *puStackY304;
  char *pcStackY296;
  byte *apbStackY288 [5];
  char *pcStackY248;
  char *pcStackY240;
  char *pcStackY232;
  char *pcStackY224;
  char *pcStackY216;
  undefined8 uStackY208;
  undefined8 uStackY200;
  undefined8 uStackY192;
  char *local_88;
  size_t n_users;
  STRUCT_UTMP *utmp_buf;
  char pidstr [12];
  
  bVar25 = 0;
  lVar15 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = read_utmp(filename,&n_users,&utmp_buf,options);
  pSVar19 = utmp_buf;
  if (iVar4 == 0) {
    if (short_list == false) {
      if (include_heading != false) {
        pcVar6 = (char *)dcgettext(0,&DAT_0010a087,5);
        pcVar9 = (char *)dcgettext(0,"COMMENT",5);
        pcVar8 = (char *)dcgettext(0,&DAT_0010a094,5);
        idle = (char *)dcgettext(0,&DAT_0010a098,5);
        time_str = (char *)dcgettext(0,&DAT_0010a09d,5);
        line = (char *)dcgettext(0,&DAT_0010a0a2,5);
        user = (char *)dcgettext(0,&DAT_0010a0a7,5);
        print_line(-1,user,' ',-1,line,time_str,idle,pcVar8,pcVar9,pcVar6);
      }
      if (my_line_only != false) {
        local_88 = ttyname(0);
        if (local_88 == (char *)0x0) goto LAB_001036f6;
        iVar4 = strncmp(local_88,"/dev/",5);
        if (iVar4 == 0) {
          local_88 = local_88 + 5;
        }
      }
      lVar16 = n_users - 1;
      boottime = -0x8000000000000000;
      if (n_users != 0) {
        do {
          sVar21 = pSVar19->ut_type;
          if ((my_line_only == false) ||
             (iVar4 = strncmp(local_88,pSVar19->ut_line,0x20), iVar4 == 0)) {
            if ((need_users == false) || ((pSVar19->ut_user[0] == '\0' || (sVar21 != 7)))) {
              if ((need_runlevel == false) || (sVar21 != 1)) {
                if ((need_boottime == false) || (sVar21 != 2)) {
                  if ((need_clockchange == false) || (sVar21 != 3)) {
                    if ((need_initspawn == false) || (sVar21 != 5)) {
                      if ((need_login == false) || (sVar21 != 6)) {
                        if ((need_deadprocs != false) && (sVar21 == 8)) {
                          pcVar6 = make_id_equals_comment(pSVar19);
                          __sprintf_chk(pidstr,1,0xc,&DAT_0010a026);
                          if (exitstr_8070 == (char *)0x0) {
                            pcVar9 = (char *)dcgettext(0,"term=",5);
                            uVar13 = 0xffffffffffffffff;
                            do {
                              if (uVar13 == 0) break;
                              uVar13 = uVar13 - 1;
                              cVar1 = *pcVar9;
                              pcVar9 = pcVar9 + (ulong)bVar25 * -2 + 1;
                            } while (cVar1 != '\0');
                            pcVar9 = (char *)dcgettext(0,"exit=",5);
                            uVar14 = 0xffffffffffffffff;
                            do {
                              if (uVar14 == 0) break;
                              uVar14 = uVar14 - 1;
                              cVar1 = *pcVar9;
                              pcVar9 = pcVar9 + (ulong)bVar25 * -2 + 1;
                            } while (cVar1 != '\0');
                            exitstr_8070 = (char *)xmalloc(~uVar13 + 0xc + ~uVar14);
                          }
                          dcgettext(0,"exit=",5);
                          sVar21 = (pSVar19->ut_exit).e_termination;
                          uVar7 = dcgettext(0,"term=",5);
                          __sprintf_chk(exitstr_8070,1,0xffffffffffffffff,"%s%d %s%d",uVar7,
                                        (int)sVar21);
                          pcVar9 = exitstr_8070;
                          pcVar8 = time_string((STRUCT_UTMP *)(ulong)(uint)(pSVar19->ut_tv).tv_sec);
                          uStackY192 = 0x103bd8;
                          print_line(-1,"",' ',0x20,pSVar19->ut_line,pcVar8,"",pidstr,pcVar6,pcVar9)
                          ;
                          rpl_free(pcVar6);
                          sVar21 = pSVar19->ut_type;
                        }
                        goto LAB_00103670;
                      }
                      pcVar6 = make_id_equals_comment(pSVar19);
                      __sprintf_chk(pidstr,1,0xc,&DAT_0010a026,(long)pSVar19->ut_pid);
                      pcVar9 = time_string((STRUCT_UTMP *)(ulong)(uint)(pSVar19->ut_tv).tv_sec);
                      pcVar8 = (char *)dcgettext(0,"LOGIN",5);
                    }
                    else {
                      pcVar6 = make_id_equals_comment(pSVar19);
                      __sprintf_chk(pidstr,1,0xc,&DAT_0010a026,(long)pSVar19->ut_pid);
                      pcVar9 = time_string((STRUCT_UTMP *)(ulong)(uint)(pSVar19->ut_tv).tv_sec);
                      pcVar8 = "";
                    }
                    print_line(-1,pcVar8,' ',0x20,pSVar19->ut_line,pcVar9,"",pidstr,pcVar6,"");
                    rpl_free(pcVar6);
                    sVar21 = pSVar19->ut_type;
                    goto LAB_00103670;
                  }
                  pcVar6 = time_string((STRUCT_UTMP *)(ulong)(uint)(pSVar19->ut_tv).tv_sec);
                  pcVar9 = "clock change";
                }
                else {
                  pcVar6 = time_string((STRUCT_UTMP *)(ulong)(uint)(pSVar19->ut_tv).tv_sec);
                  pcVar9 = "system boot";
                }
                pcVar9 = (char *)dcgettext(0,pcVar9,5);
                print_line(-1,"",' ',-1,pcVar9,pcVar6,"","","","");
                sVar21 = pSVar19->ut_type;
              }
              else {
                iVar4 = pSVar19->ut_pid;
                uVar13 = (long)iVar4 / 0x100;
                if (runlevline_8089 == (char *)0x0) {
                  pcVar6 = (char *)dcgettext(0,"run-level",5);
                  uVar14 = 0xffffffffffffffff;
                  do {
                    if (uVar14 == 0) break;
                    uVar14 = uVar14 - 1;
                    cVar1 = *pcVar6;
                    pcVar6 = pcVar6 + (ulong)bVar25 * -2 + 1;
                  } while (cVar1 != '\0');
                  runlevline_8089 = (char *)xmalloc(~uVar14 + 2);
                }
                uVar7 = dcgettext(0,"run-level",5);
                __sprintf_chk(runlevline_8089,1,0xffffffffffffffff,"%s %c",uVar7,
                              (long)iVar4 % 0x100 & 0xff);
                if (comment_8090 == (char *)0x0) {
                  pcVar6 = (char *)dcgettext(0,"last=",5);
                  lVar12 = -1;
                  do {
                    if (lVar12 == 0) break;
                    lVar12 = lVar12 + -1;
                    cVar1 = *pcVar6;
                    pcVar6 = pcVar6 + (ulong)bVar25 * -2 + 1;
                  } while (cVar1 != '\0');
                  comment_8090 = (char *)xmalloc(-lVar12);
                }
                uVar22 = uVar13 & 0xff;
                uVar14 = 0x53;
                if ((char)uVar13 != 'N') {
                  uVar14 = uVar22;
                }
                uVar7 = dcgettext(0,"last=",5);
                __sprintf_chk(comment_8090,1,0xffffffffffffffff,&DAT_0010a0c8,uVar7,uVar14);
                pcVar6 = "";
                if ((int)uVar22 - 0x20U < 0x5f) {
                  pcVar6 = comment_8090;
                }
                pcVar9 = time_string((STRUCT_UTMP *)(ulong)(uint)(pSVar19->ut_tv).tv_sec);
                print_line(-1,"",' ',-1,runlevline_8089,pcVar9,"","",pcVar6,"");
                sVar21 = pSVar19->ut_type;
              }
            }
            else {
              print_user(pSVar19,boottime);
              sVar21 = pSVar19->ut_type;
            }
          }
LAB_00103670:
          if (sVar21 == 2) {
            boottime = (time_t)(pSVar19->ut_tv).tv_sec;
          }
          lVar16 = lVar16 + -1;
          pSVar19 = pSVar19 + 1;
        } while (lVar16 != -1);
      }
    }
    else {
      lVar16 = n_users - 1;
      if (n_users != 0) {
        n_users = 0;
        pcVar6 = "";
        do {
          if ((pSVar19->ut_user[0] != '\0') && (pSVar19->ut_type == 7)) {
            n_users = n_users + 1;
            pcVar9 = extract_trimmed_name(pSVar19);
            __printf_chk(1,&DAT_0010a074,pcVar6,pcVar9);
            rpl_free(pcVar9);
            pcVar6 = " ";
          }
          lVar16 = lVar16 + -1;
          pSVar19 = pSVar19 + 1;
        } while (lVar16 != -1);
      }
      uVar7 = dcgettext(0,"\n# users=%lu\n",5);
      __printf_chk(1,uVar7,n_users);
    }
LAB_001036f6:
    rpl_free(utmp_buf);
    if (lVar15 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar7 = quotearg_n_style_colon(0,3,filename);
  piVar10 = __errno_location();
  iVar4 = 1;
  error(1,*piVar10,"%s",uVar7);
  pcVar6 = program_name;
  if (iVar4 != 0) {
    uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar7,pcVar6);
    goto LAB_00103d7a;
  }
  uVar7 = dcgettext(0,"Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n",5);
  __printf_chk(1,uVar7,pcVar6);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"Print information about users who are currently logged in.\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"  -l, --login       print system login processes\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  uVar7 = dcgettext(0,
                    "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: \'am i\' or \'mom likes\' are usual.\n"
                    ,5);
  __printf_chk(1,uVar7,"/var/run/utmp","/var/log/wtmp");
  apbStackY288[4] = (byte *)0x10a163;
  puStackY304 = &DAT_0010a122;
  pcStackY296 = "test invocation";
  apbStackY288[0] = (byte *)0x10a19c;
  apbStackY288[1] = (byte *)0x10a134;
  uStackY208 = 0;
  uStackY200 = 0;
  apbStackY288[2] = (byte *)0x10a14a;
  pcStackY240 = "sha384sum";
  apbStackY288[3] = (byte *)0x10a154;
  pcStackY248 = "sha2 utilities";
  pcStackY232 = "sha2 utilities";
  pcStackY224 = "sha512sum";
  pcStackY216 = "sha2 utilities";
  ppuVar3 = &puStackY304;
  do {
    puVar11 = (undefined *)ppuVar3;
    bVar23 = false;
    bVar24 = *(byte **)(puVar11 + 0x10) == (byte *)0x0;
    if (bVar24) break;
    lVar15 = 4;
    pbVar17 = &DAT_0010a102;
    pbVar18 = *(byte **)(puVar11 + 0x10);
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar23 = *pbVar17 < *pbVar18;
      bVar24 = *pbVar17 == *pbVar18;
      pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar25 * -2 + 1;
    } while (bVar24);
    ppuVar3 = (undefined **)(puVar11 + 0x10);
  } while ((!bVar23 && !bVar24) != bVar23);
  puVar20 = *(undefined1 **)(puVar11 + 0x18);
  if (puVar20 == (undefined1 *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if ((pcVar6 != (char *)0x0) && (iVar5 = strncmp(pcVar6,"en_",3), iVar5 != 0)) {
      puVar20 = &DAT_0010a102;
      goto LAB_00104122;
    }
    uVar7 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar20 = &DAT_0010a102;
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0010a102);
    pcVar6 = " invocation";
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if ((pcVar6 != (char *)0x0) && (iVar5 = strncmp(pcVar6,"en_",3), iVar5 != 0)) {
LAB_00104122:
      pFVar2 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "Report any translation bugs to <https://translationproject.org/team/>\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar2);
    }
    uVar7 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0010a102);
    if (puVar20 != &DAT_0010a102) {
      pcVar6 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,puVar20,pcVar6);
LAB_00103d7a:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}

