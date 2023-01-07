void FUN1()
{
    wchar_t * VAR1;
    CWE126_Buffer_Overread__malloc_wchar_t_loop_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(VAR1, VAR3'', 50-1); 
    VAR1[50-1] = VAR3''; 
    VAR2.VAR4 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR5;
        {
            size_t VAR6, VAR7;
            wchar_t VAR8[100];
            wmemset(VAR8, VAR3'', 100-1);
            VAR8[100-1] = VAR3''; 
            VAR7 = wcslen(VAR8);
            
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR8[VAR6] = VAR1[VAR6];
            }
            VAR8[100-1] = VAR3'';
            FUN2(VAR8);
            free(VAR1);
        }
    }
}