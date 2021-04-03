void list_connect(data *p, data *p_2)
{
    data *tem = p;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = p_2;
}