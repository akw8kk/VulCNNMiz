static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(5==5)
    {
        
        VAR1 = FUN2();
    }
    if(5!=5)
    {
        
        FUN3("");
    }
    else
    {
        {
            int VAR2;
            int VAR3[10] = { 0 };
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN4(VAR3[VAR2]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}