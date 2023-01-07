static void FUN1()
{
    int * VAR1;
    int VAR2[50];
    int VAR3[100];
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = VAR3;
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
            FUN3(VAR1[0]);
        }
    }
}