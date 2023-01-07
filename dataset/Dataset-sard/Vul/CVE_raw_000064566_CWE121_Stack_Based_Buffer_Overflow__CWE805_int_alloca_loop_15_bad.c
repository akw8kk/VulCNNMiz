void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    switch(6)
    {
    case 6:
        
        VAR1 = VAR2;
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        int VAR4[100] = {0}; 
        {
            size_t VAR5;
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR1[VAR5] = VAR4[VAR5];
            }
            FUN4(VAR1[0]);
        }
    }
}