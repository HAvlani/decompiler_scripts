typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char g_402821;
extern char g_402c0b;
extern char g_402c21;
extern char g_402c32;
extern char g_402c3c;
extern char g_402c7a;
extern char g_402c90;
extern char g_402c9a;
extern unsigned int g_407083;
extern char g_4070ac;
extern unsigned int g_4070ae;
extern char g_4070cf;
extern char g_4070e7;
extern char g_4070f4;
extern unsigned int g_4070f8;
extern unsigned int g_4075b8;
extern unsigned int g_4075e0;
extern char g_407628;
extern struct_0 g_407660;
extern char g_407833;
extern unsigned int long_options;
extern struct_1 optarg;
extern struct_0 optind;
extern unsigned int short_options;

int main()
{
    unsigned long long v12;  // rax
    unsigned long v23;  // rbx
    unsigned long v26;  // rsi
    struct_2 *v27;  // rdi
    unsigned long long v31;  // r12
    unsigned int v32;  // r13d

    v12 = ((long long)optind);
    v32 = ((int)v27);
    v31 = v26;
    v23 = -1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407083, &g_4075b8);
    textdomain(&g_407083);
    atexit();
    optind = optind - 1;
}
