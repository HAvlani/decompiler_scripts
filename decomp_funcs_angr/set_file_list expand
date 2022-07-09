extern <missing-type> file_list;
extern char have_read_stdin;
extern <missing-type> stdin_argv;

int set_file_list()
{
    unsigned long v1;  // rdi

    have_read_stdin = 0;
    file_list = (v1 == 0? &stdin_argv : v1);
    return &stdin_argv;
}
