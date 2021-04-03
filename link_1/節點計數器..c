

int list_num(data *p)
{
    int number = 0;
    while (p != NULL)
    {
        number++;
        p = p->next;
    }
    return number;
}
