void FUN1()
{
    int VAR1;
    CWE124_Buffer_Underwrite__CWE839_fscanf_34_unionType VAR2;
    
    VAR1 = -1;
    
    fscanf(stdin, "", &VAR1);
    VAR2.VAR3 = VAR1;
    {
        int VAR1 = VAR2.VAR4;
        {
            int VAR5;
            int VAR6[10] = { 0 };
            
            if (VAR1 < 10)
            {
                VAR6[VAR1] = 1;
                
                for(VAR5 = 0; VAR5 < 10; VAR5++)
                {
                    FUN2(VAR6[VAR5]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}