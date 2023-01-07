void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    if(VAR4)
    {
        
        VAR1 = VAR2;
    }
    {
        int VAR5[100] = {0}; 
        {
            size_t VAR6;
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR1[VAR6] = VAR5[VAR6];
            }
            FUN3(VAR1[0]);
        }
    }
}