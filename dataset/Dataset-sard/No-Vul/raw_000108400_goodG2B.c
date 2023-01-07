static void FUN1()
{
    int * VAR1;
    VAR1 = NULL; 
    {
        
        int * VAR2 = (int *)malloc(100*sizeof(int));
        if (VAR2 == NULL)
        {
            FUN2("");
            FUN3(1);
        }
        {
            size_t VAR3;
            for (VAR3 = 0; VAR3 < 100; VAR3++)
            {
                VAR2[VAR3] = 5;
            }
        }
        VAR1 = VAR2;
    }
    VAR4 = VAR1;
    FUN4();
}