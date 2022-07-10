extern unsigned int g_406ce2;
extern unsigned int g_406d0c;
extern unsigned int g_406f60;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_406ce2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_406d0c, 0x5));
    dcgettext(0x0, &g_406f60, 0x5);
}
