
void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_0011cfc0)
            (main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
             auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

