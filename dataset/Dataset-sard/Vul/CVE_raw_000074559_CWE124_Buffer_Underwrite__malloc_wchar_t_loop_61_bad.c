void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        size_t VAR2;
        wchar_t VAR3[100];
        wmemset(VAR3, VAR4'', 100-1); 
        VAR3[100-1] = VAR4''; 
        
        for (VAR2 = 0; VAR2 < 100; VAR2++)
        {
            VAR1[VAR2] = VAR3[VAR2];
        }
        
        VAR1[100-1] = VAR4'';
        FUN3(VAR1);
        
    }
}