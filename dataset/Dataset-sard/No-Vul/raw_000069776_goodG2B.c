static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(10*sizeof(int));
    {
        int VAR2[10] = {0};
        size_t VAR3;
        
        for (VAR3 = 0; VAR3 < 10; VAR3++)
        {
            VAR1[VAR3] = VAR2[VAR3];
        }
        FUN2(VAR1[0]);
        free(VAR1);
    }
}