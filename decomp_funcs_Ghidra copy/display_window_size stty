
void display_window_size(_Bool fancy,char *device_name)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  byte *pbVar10;
  undefined7 in_register_00000039;
  byte *pbVar11;
  undefined1 *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  undefined *puStack208;
  char *pcStack200;
  byte *apbStack192 [5];
  char *pcStack152;
  char *pcStack144;
  char *pcStack136;
  char *pcStack128;
  char *pcStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack88;
  ulong uStack72;
  int *piStack64;
  undefined8 uStack56;
  winsize win;
  
  bVar15 = 0;
  uStack72 = CONCAT71(in_register_00000039,fancy) & 0xffffffff;
  lVar9 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ioctl(0,0x5413,&win);
  if (iVar3 == 0) {
    if ((char)uStack72 == '\0') {
      wrapf("%d %d\n",(ulong)win.ws_row,(ulong)win.ws_col);
      current_col = 0;
    }
    else {
      wrapf("rows %d; columns %d;",(ulong)win.ws_row,(ulong)win.ws_col);
    }
  }
  else {
    piStack64 = __errno_location();
    if (*piStack64 != 0x16) {
      uVar5 = quotearg_n_style_colon(0,3,device_name);
      error(1,*piStack64,"%s",uVar5);
      goto LAB_00104c62;
    }
    if ((char)uStack72 == '\0') {
      uStack56 = quotearg_n_style_colon(0,3,device_name);
      uVar5 = dcgettext(0,"%s: no size information for this device",5);
      iVar3 = 1;
      error(1,0,uVar5,uStack56);
      pcVar6 = program_name;
      uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      if (iVar3 != 0) {
        uVar5 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(stderr,1,uVar5,pcVar6);
        goto LAB_00104cfa;
      }
      uVar5 = dcgettext(0,
                        "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n"
                        ,5);
      __printf_chk(1,uVar5,pcVar6,pcVar6,pcVar6);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"Print or change terminal characteristics.\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nMandatory arguments to long options are mandatory for short options too.\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"\nSpecial characters:\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * discard CHAR  CHAR will toggle discarding of output\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * eol2 CHAR     alternate CHAR for ending the line\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * lnext CHAR    CHAR will enter the next character quoted\n",5)
      ;
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"   quit CHAR     CHAR will send a quit signal\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * rprnt CHAR    CHAR will redraw the current line\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * swtch CHAR    CHAR will switch to a different shell layer\n",
                                 5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * werase CHAR   CHAR will erase the last word typed\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      if (tcsetattr_options == 1) {
        uVar5 = dcgettext(0,"on",5);
      }
      else {
        uVar5 = dcgettext(0,&DAT_0010d4d1,5);
      }
      uVar7 = dcgettext(0,
                        " * [-]drain      wait for transmission before applying settings (%s by default)\n"
                        ,5);
      __printf_chk(1,uVar7,uVar5);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"   ispeed N      set the input speed to N\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * line N        use line discipline N\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * rows N        tell the kernel that the terminal has N rows\n * size          print the number of rows and columns according to the kernel\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]crtscts    enable RTS/CTS handshaking\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"   csN           set character size to N bits, N in [5..8]\n",5)
      ;
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   [-]cstopb     use two stop bits per character (one with \'-\')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with \'-\')\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]cmspar     use \"stick\" (mark/space) parity\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]iutf8      assume input characters are UTF-8 encoded\n",5)
      ;
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]iuclc      translate uppercase characters to lowercase\n",
                                 5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]ixany      let any character restart output, not only start character\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"\nOutput settings:\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * bsN           backspace delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * crN           carriage return delay style, N in [0..3]\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * ffN           form feed delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * nlN           newline delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]ocrnl      translate carriage return to newline\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]ofdel      use delete characters for fill instead of NUL characters\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]olcuc      translate lowercase characters to uppercase\n",
                                 5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]onlcr      translate newline to carriage return-newline\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]onlret     newline performs a carriage return\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]onocr      do not print carriage returns in the first column\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"   [-]opost      postprocess output\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * vtN           vertical tab delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]ctlecho    echo control characters in hat notation (\'^c\')\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"   [-]echo       echo input characters\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]echoctl    same as [-]ctlecho\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]echoke     same as [-]crtkill\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   [-]echonl     echo newline even if not echoing other characters\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]echoprt    echo erased characters backward, between \'\\\' and \'/\'\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]flusho     discard output\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      uVar5 = dcgettext(0,
                        "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n"
                        ,5);
      __printf_chk(1,uVar5,"erase, kill, werase, rprnt");
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]prterase   same as [-]echoprt\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]tostop     stop background jobs that try to write to the terminal\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 " * [-]xcase      with icanon, escape with \'\\\' for uppercase characters\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,"\nCombination settings:\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]LCASE      same as [-]lcase\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   cbreak        same as -icanon\n   -cbreak       same as icanon\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      uVar5 = dcgettext(0,"   crt           same as %s\n",5);
      __printf_chk(1,uVar5,"echoe echoctl echoke");
      uVar5 = dcgettext(0,
                        "   dec           same as %s intr ^c erase 0177\n                 kill ^u\n"
                        ,5);
      __printf_chk(1,uVar5,"echoe echoctl echoke -ixany");
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]decctlq    same as [-]ixany\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0," * [-]lcase      same as xcase iuclc olcuc\n",5);
      fputs_unlocked(pcVar6,pFVar1);
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      uVar5 = dcgettext(0,"   nl            same as %s\n   -nl           same as %s\n",5);
      __printf_chk(1,uVar5,"-icrnl -onlcr","icrnl -inlcr -igncr onlcr -ocrnl -onlret");
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      uVar5 = dcgettext(0,
                        "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n"
                        ,5);
      __printf_chk(1,uVar5," -iuclc -ixany -imaxbel -xcase");
      uVar5 = dcgettext(0,
                        "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n"
                        ,5);
      __printf_chk(1,uVar5,"-ixoff -iutf8 -iuclc -ixany imaxbel -xcase -olcuc -ocrnl",
                   "opost -ofill onlcr -onocr -onlret nl0 cr0 tab0 bs0 vt0 ff0",
                   "isig -tostop -ofdel -echoprt echoctl echoke -extproc -flusho");
      pFVar1 = stdout;
      pcVar6 = (char *)dcgettext(0,
                                 "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n"
                                 ,5);
      fputs_unlocked(pcVar6,pFVar1);
      apbStack192[4] = (byte *)0x10d15b;
      puStack208 = &DAT_0010d11a;
      pcStack200 = "test invocation";
      apbStack192[0] = (byte *)0x10d194;
      apbStack192[1] = (byte *)0x10d12c;
      uStack112 = 0;
      uStack104 = 0;
      apbStack192[2] = (byte *)0x10d142;
      pcStack144 = "sha384sum";
      apbStack192[3] = (byte *)0x10d14c;
      pcStack152 = "sha2 utilities";
      pcStack136 = "sha2 utilities";
      pcStack128 = "sha512sum";
      pcStack120 = "sha2 utilities";
      ppuVar2 = &puStack208;
      do {
        puVar8 = (undefined *)ppuVar2;
        bVar13 = false;
        bVar14 = *(byte **)(puVar8 + 0x10) == (byte *)0x0;
        if (bVar14) break;
        lVar9 = 5;
        pbVar10 = &DAT_0010d05d;
        pbVar11 = *(byte **)(puVar8 + 0x10);
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar13 = *pbVar10 < *pbVar11;
          bVar14 = *pbVar10 == *pbVar11;
          pbVar10 = pbVar10 + (ulong)bVar15 * -2 + 1;
          pbVar11 = pbVar11 + (ulong)bVar15 * -2 + 1;
        } while (bVar14);
        ppuVar2 = (undefined **)(puVar8 + 0x10);
      } while ((!bVar13 && !bVar14) != bVar13);
      puVar12 = *(undefined1 **)(puVar8 + 0x18);
      if (puVar12 == (undefined1 *)0x0) {
        uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar6 = setlocale(5,(char *)0x0);
        if (pcVar6 != (char *)0x0) {
          iVar4 = strncmp(pcVar6,"en_",3);
          if (iVar4 != 0) {
            puVar12 = &DAT_0010d05d;
            goto LAB_00105b2a;
          }
        }
        uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
        puVar12 = &DAT_0010d05d;
        __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0010d05d);
        pcVar6 = " invocation";
      }
      else {
        uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar6 = setlocale(5,(char *)0x0);
        if (pcVar6 != (char *)0x0) {
          iVar4 = strncmp(pcVar6,"en_",3);
          if (iVar4 != 0) {
LAB_00105b2a:
            pFVar1 = stdout;
            pcVar6 = (char *)dcgettext(0,
                                       "Report any translation bugs to <https://translationproject.org/team/>\n"
                                       ,5);
            fputs_unlocked(pcVar6,pFVar1);
          }
        }
        uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
        pcVar6 = " invocation";
        __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0010d05d);
        if (puVar12 != &DAT_0010d05d) {
          pcVar6 = "";
        }
      }
      uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
      __printf_chk(1,uVar5,puVar12,pcVar6);
LAB_00104cfa:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
  }
  if (lVar9 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c62:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

