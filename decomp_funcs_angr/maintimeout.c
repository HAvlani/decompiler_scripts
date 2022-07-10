typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char chld;
extern char cleanup;
extern struct_0 command;
extern unsigned int exit_failure;
extern char foreground;
extern char g_402a02;
extern char g_402a23;
extern unsigned int g_407031;
extern unsigned int g_4070cb;
extern unsigned int g_40711b;
extern unsigned int g_407122;
extern unsigned int g_40713a;
extern unsigned int g_407153;
extern unsigned int g_407a00;
extern unsigned int g_407a28;
extern unsigned int g_407a50;
extern unsigned int g_407a78;
extern struct_1 g_407a9c;
extern struct_0 kill_after;
extern unsigned int long_options;
extern struct_1 monitored_pid;
extern struct_1 optind;
extern char preserve_status;
extern struct_1 term_signal;
extern struct_1 timed_out;
extern char verbose;

int main()
{
    struct_0 *v28;  // rbp
    unsigned long v29;  // rsi
    char *v30;  // rdi
    char *v31;  // r12
    unsigned long long v33;  // xmm0lq
    unsigned long v6;  // [bp+0x0]

    rsp<8> = rsp<8> - 8;
    v6 = &g_402a02;
    term_signal = operand2sig();
    verbose = 1;
    rsp<8> = rsp<8> - 8;
    v6 = &g_402a23;
    parse_duration();
    kill_after = v33;
    v31 = v30;
    v28 = v29;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4070cb, &g_407a00);
    textdomain(&g_4070cb);
    exit_failure = 125;
    atexit();
    if (term_signal == -1)
    {
        usage(); /* do not return */
    }
}
