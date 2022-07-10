typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 current_line;
extern char have_read_eof;
extern struct_0 head;
extern unsigned long long prev_buf.7512;

int remove_line()
{
    unsigned long long v1;  // rax
    unsigned long long v3[164];  // rcx
    struct_0 *|unsigned long long v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r8

    if (prev_buf.7512 != 0)
    {
        free_buffer();
        prev_buf.7512 = 0;
    }
    v1 = head;
    if (head == 0)
    {
        if (have_read_eof == 0)
        {
            v1 = load_buffer.part.0();
            if (((long long)v1) != 0)
            {
                v1 = head;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (head != 0 || have_read_eof == 0 && ((long long)v1) != 0)
    {
        v5 = *(v1 + 24);
        if (*(v1 + 24) > current_line)
        {
            current_line = v5;
        }
        v3 = *(v1 + 56);
        *(v1 + 24) = current_line + 1;
        v4 = v3[2] + 1;
        v3[2] = v3[2] + 1;
        v6 = v3 + v4 * 16 + 8;
        if (v4 != v3[0])
        {
            return v6;
        }
        v4 = v3[163];
        *(v1 + 56) = v3[163];
        if (!(v4 != 0))
        {
            prev_buf.7512 = v1;
            head = *(v1 + 64);
            return v6;
        }
        else if (v4->field_0 != 0)
        {
            return v6;
        }
        else
        {
            prev_buf.7512 = v1;
            head = *(v1 + 64);
            return v6;
        }
    }
}
