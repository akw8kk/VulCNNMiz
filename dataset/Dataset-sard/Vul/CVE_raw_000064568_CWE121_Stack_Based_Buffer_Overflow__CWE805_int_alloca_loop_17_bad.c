void FUN1()
{
    int VAR1;
    int * VAR2;
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        int VAR5[100] = {0}; 
        {
            size_t VAR1;
            
            for (VAR1 = 0; VAR1 < 100; VAR1++)
            {
                VAR2[VAR1] = VAR5[VAR1];
            }
            FUN3(VAR2[0]);
        }
    }
}