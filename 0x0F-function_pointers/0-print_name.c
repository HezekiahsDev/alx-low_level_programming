/**
  *print_name - display name (use another function)
  *@name: function pointer to name
  *@f: function pointer
  *
  *Return: empty
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
