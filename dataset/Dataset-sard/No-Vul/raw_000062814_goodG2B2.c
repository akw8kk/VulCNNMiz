static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (int *)FUN3(10*sizeof(int));
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