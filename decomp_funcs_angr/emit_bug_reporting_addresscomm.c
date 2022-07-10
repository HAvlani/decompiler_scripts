extern unsigned int g_408002;
extern unsigned int g_40802c;
extern unsigned int g_408280;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_408002, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40802c, 0x5));
    dcgettext(0x0, &g_408280, 0x5);
}
