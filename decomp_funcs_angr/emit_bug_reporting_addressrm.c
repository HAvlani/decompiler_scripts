extern unsigned int g_40d9a2;
extern unsigned int g_40d9b6;
extern unsigned int g_40dc08;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40d9a2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40d9b6, 0x5));
    dcgettext(0x0, &g_40dc08, 0x5);
}
