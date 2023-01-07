static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = 7;
    }
    if(5==5)
    {
        {
            int VAR2;
            int VAR3[10] = { 0 };
            
            if (VAR1 >= 0)
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN3(VAR3[VAR2]);
                }
            }
            else
            {
                FUN2("");
            }
        }
    }
}