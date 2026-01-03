
List MakeEmpty()
{
    List p = (List)malloc(sizeof(struct LNode));
    p->Last = -1;//这里令last为-1,这样可以last每次指的就是最后一个数据，而不是下一个数据的下一个
    return p;
}

Position Find( List L, ElementType X )
{
    int i;
    for(i = 0; i <= L->Last; i++)
    {
        if(X==L->Data[i])
        {
            //遍历搜索查找
            return i;
        }
    }
    return ERROR;
}

bool Insert(List L, ElementType X, Position P) 
{
    if (L->Last == MAXSIZE - 1) 
    {
        printf("FULL");
        return false;
    }
    if (P < 0 || P > L->Last + 1) 
    {
        printf("ILLEGAL POSITION");
        return false;
    }

    for (int i = L->Last; i >= P; i--) 
    {
        L->Data[i + 1] = L->Data[i];
    }
    L->Data[P] = X;
    L->Last++;
    return true;
}

bool Delete(List L, Position P)
{
    if (P < 0 || P > L->Last) 
    {
        printf("POSITION %d EMPTY", P);
        return false;
    }

    for (int i = P; i < L->Last; i++) 
    {
        L->Data[i] = L->Data[i + 1];
    }
    L->Last--;
    return true;
}