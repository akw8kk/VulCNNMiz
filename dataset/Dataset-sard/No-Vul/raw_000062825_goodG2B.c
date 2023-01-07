static void FUN1()
{
    int * VAR1;
    int * *VAR2 = &VAR1;
    int * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        int * VAR1 = *VAR2;
        
        VAR1 = (int *)FUN2(10*sizeof(int));
        *VAR2 = VAR1;
    }
    {
        int * VAR1 = *VAR3;
        {
            int VAR4[10] = {0};
            size_t VAR5;
            
            for (VAR5 = 0; VAR5 < 10; VAR5++)
            {
                VAR1[VAR5] = VAR4[VAR5];
            }
            FUN3(VAR1[0]);
        }
    }
}