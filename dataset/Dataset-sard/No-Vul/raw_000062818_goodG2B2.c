static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (int *)FUN2(10*sizeof(int));
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        int VAR2[10] = {0};
        size_t VAR3;
        
        for (VAR3 = 0; VAR3 < 10; VAR3++)
        {
            VAR1[VAR3] = VAR2[VAR3];
        }
        FUN4(VAR1[0]);
    }
}