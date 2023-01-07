static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1[0] = VAR2''; 
    {
        wchar_t * VAR3 = VAR1;
        wchar_t * VAR1 = VAR3;
        {
            size_t VAR4;
            wchar_t VAR5[100];
            wmemset(VAR5, VAR2'', 100-1); 
            VAR5[100-1] = VAR2''; 
            
            for (VAR4 = 0; VAR4 < 100; VAR4++)
            {
                VAR1[VAR4] = VAR5[VAR4];
            }
            VAR1[100-1] = VAR2''; 
            FUN2(VAR1);
            free(VAR1);
        }
    }
}