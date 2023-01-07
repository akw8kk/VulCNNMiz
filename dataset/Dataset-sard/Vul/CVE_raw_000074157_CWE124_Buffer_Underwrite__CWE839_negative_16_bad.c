void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    while(1)
    {
        
        VAR1 = -5;
        break;
    }
    while(1)
    {
        {
            int VAR2;
            int VAR3[10] = { 0 };
            
            if (VAR1 < 10)
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN2(VAR3[VAR2]);
                }
            }
            else
            {
                FUN3("");
            }
        }
        break;
    }
}