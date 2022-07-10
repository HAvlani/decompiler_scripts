extern unsigned int g_408ee2;
extern unsigned int g_408f0c;
extern unsigned int g_409160;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_408ee2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_408f0c, 0x5));
    dcgettext(0x0, &g_409160, 0x5);
}
