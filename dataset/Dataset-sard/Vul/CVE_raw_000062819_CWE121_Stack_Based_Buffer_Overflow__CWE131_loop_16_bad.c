void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (int *)FUN2(10);
        break;
    }
    {
        int VAR2[10] = {0};
        size_t VAR3;
        
        for (VAR3 = 0; VAR3 < 10; VAR3++)
        {
            VAR1[VAR3] = VAR2[VAR3];
        }
        FUN3(VAR1[0]);
    }
}