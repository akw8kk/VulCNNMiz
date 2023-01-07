void FUN1()
{
    int VAR1;
    
    void (*VAR2) (int) = VAR3;
    
    VAR1 = -1;
    {
        char VAR4[VAR5] = "";
        
        if (fgets(VAR4, VAR5, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR4);
        }
        else
        {
            FUN3("");
        }
    }
    
    FUN4(VAR1);
}