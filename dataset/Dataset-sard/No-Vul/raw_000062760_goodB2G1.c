static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2)
    {
        
        VAR1 = FUN2();
    }
    if(VAR3)
    {
        
        FUN3("");
    }
    else
    {
        {
            int VAR4;
            int VAR5[10] = { 0 };
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR5[VAR1] = 1;
                
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN4(VAR5[VAR4]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}