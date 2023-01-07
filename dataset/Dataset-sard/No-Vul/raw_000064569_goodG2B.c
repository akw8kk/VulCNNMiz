static void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    goto VAR4;
VAR4:
    
    VAR1 = VAR3;
    {
        int VAR4[100] = {0}; 
        {
            size_t VAR5;
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR1[VAR5] = VAR4[VAR5];
            }
            FUN3(VAR1[0]);
        }
    }
}