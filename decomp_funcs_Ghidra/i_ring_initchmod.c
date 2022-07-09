
void i_ring_init(I_ring *ir,int default_val)

{
  *(undefined8 *)&ir->ir_front = 0;
  ir->ir_empty = true;
  ir->ir_data[0] = default_val;
  ir->ir_data[1] = default_val;
  ir->ir_data[2] = default_val;
  ir->ir_data[3] = default_val;
  ir->ir_default_val = default_val;
  return;
}

