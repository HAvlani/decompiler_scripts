extern unsigned int human_output_opts;
extern unsigned long long output_block_size;

int sub_403dec()
{
    unsigned long long v1;  // rax

    v1 = human_options();
    xstrtol_fatal();
    human_output_opts = 0;
    output_block_size = 0x100000;
}
