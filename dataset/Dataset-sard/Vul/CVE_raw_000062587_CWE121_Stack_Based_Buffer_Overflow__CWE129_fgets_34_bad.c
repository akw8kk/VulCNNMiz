void FUN1()
{
    int VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_34_unionType VAR2;
    
    VAR1 = -1;
    {
        char VAR3[VAR4] = "";
        
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR3);
        }
        else
        {
            FUN3("");
        }
    }
    VAR2.VAR5 = VAR1;
    {
        int VAR1 = VAR2.VAR6;
        {
            int VAR7;
            int VAR8[10] = { 0 };
            
            if (VAR1 >= 0)
            {
                VAR8[VAR1] = 1;
                
                for(VAR7 = 0; VAR7 < 10; VAR7++)
                {
                    FUN4(VAR8[VAR7]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}