extern unsigned int g_40b493;
extern unsigned int g_40b4bd;
extern unsigned int g_40b710;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40b493, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40b4bd, 0x5));
    dcgettext(0x0, &g_40b710, 0x5);
}