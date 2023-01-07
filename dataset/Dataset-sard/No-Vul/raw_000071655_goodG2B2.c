static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (int *)malloc(100*sizeof(int));
    }
    {
        int VAR2[100] = {0}; 
        {
            size_t VAR3;
            
            for (VAR3 = 0; VAR3 < 100; VAR3++)
            {
                VAR1[VAR3] = VAR2[VAR3];
            }
            FUN3(VAR1[0]);
            free(VAR1);
        }
    }
}