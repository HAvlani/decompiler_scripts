extern unsigned int g_406ac2;
extern unsigned int g_406aec;
extern unsigned int g_406d40;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_406ac2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_406aec, 0x5));
    dcgettext(0x0, &g_406d40, 0x5);
}
