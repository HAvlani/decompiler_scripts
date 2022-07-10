
void set_other_indent(_Bool same_paragraph)

{
  if (split != false) {
    other_indent = first_indent;
    return;
  }
  if (crown != false) {
    other_indent = in_column;
    if (same_paragraph == false) {
      other_indent = first_indent;
    }
    return;
  }
  if (tagged == false) {
    other_indent = first_indent;
  }
  else {
    if ((same_paragraph != false) && (in_column != first_indent)) {
      other_indent = in_column;
      return;
    }
    if (first_indent == other_indent) {
      other_indent = -(uint)(first_indent == 0) & 3;
      return;
    }
  }
  return;
}

