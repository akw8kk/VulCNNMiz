static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        size_t VAR3;
        wchar_t VAR4[100];
        wmemset(VAR4, VAR5'', 100-1); 
        VAR4[100-1] = VAR5''; 
        
        for (VAR3 = 0; VAR3 < 100; VAR3++)
        {
            VAR1[VAR3] = VAR4[VAR3];
        }
        
        VAR1[100-1] = VAR5'';
        FUN3(VAR1);
        
    }
}