extern unsigned int g_406a82;
extern unsigned int g_406aac;
extern unsigned int g_406d00;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_406a82, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_406aac, 0x5));
    dcgettext(0x0, &g_406d00, 0x5);
}