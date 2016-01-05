 public static class ForecastFragment extends Fragment {
        private ArrayAdapter<String> mForecastAdapter;

        public ForecastFragment() {
        }

        @Override
        public View onCreateView(LayoutInflater inflater, ViewGroup container,
                                 Bundle savedInstanceState) {
            View rootView = inflater.inflate(R.layout.fragment_main, container, false);

            String[] ForecastArray = {
                    "Today - Cloudy - 86/66",
                    "Tomorrow - Sunny - 76/57",
                    "Tuesday - Foggy - 79/53",
                    "Wednesday - Sunny - 96/70",
                    "Tomorrow - Sunny - 76/57",
                    "Tuesday - Foggy - 79/53",
                    "Wednesday - Sunny - 96/70",
                    "Tomorrow - Sunny - 76/57",
                    "Tuesday - Foggy - 79/53",
                    "Wednesday - Sunny - 96/70",
                    "Tomorrow - Sunny - 76/57",
                    "Tuesday - Foggy - 79/53",
                    "Wednesday - Sunny - 96/70",
                    "Tomorrow - Sunny - 76/57",
                    "Tuesday - Foggy - 79/53",
                    "Wednesday - Sunny - 96/70",
                    "Tomorrow - Sunny - 76/57",
                    "Tuesday - Foggy - 79/53",
                    "Wednesday - Sunny - 96/70",
                    "Friday - Rainy - 86/53"};
            List<String> weekForecast = new ArrayList<String>(Arrays.asList(ForecastArray));

            mForecastAdapter = new ArrayAdapter<String>(
                getActivity(),
                R.layout.list_item_forecast,
                R.id.list_item_forecast_textview,
                weekForecast
            );

            ListView list = (ListView) rootView.findViewById(R.id.listview_forecast);
            list.setAdapter(mForecastAdapter);


            HttpURLConnection urlConnection = null;
            BufferedReader reader = null;

            // Will contain the raw JSON response as a string.
            String forecastJsonStr = null;

            try {
                // Construct the URL for the OpenWeatherMap query
                // Possible parameters are avaiable at OWM's forecast API page, at
                // http://openweathermap.org/API#forecast
                URL url = new URL("http://api.openweathermap.org/data/2.5/forecast/daily?q=94043&mode=json&units=metric&cnt=7");

                // Create the request to OpenWeatherMap, and open the connection
                urlConnection = (HttpURLConnection) url.openConnection();
                urlConnection.setRequestMethod("GET");
                urlConnection.connect();

                // Read the input stream into a String
                InputStream inputStream = urlConnection.getInputStream();
                StringBuffer buffer = new StringBuffer();
                if (inputStream == null) {
                    // Nothing to do.
                    return null;
                }
                reader = new BufferedReader(new InputStreamReader(inputStream));

                String line;
                while ((line = reader.readLine()) != null) {
                    // Since it's JSON, adding a newline isn't necessary (it won't affect parsing)
                    // But it does make debugging a *lot* easier if you print out the completed
                    // buffer for debugging.
                    buffer.append(line + "\n");
                }

                if (buffer.length() == 0) {
                    // Stream was empty.  No point in parsing.
                    return null;
                }
                forecastJsonStr = buffer.toString();
            } catch (IOException e) {
                Log.e("PlaceholderFragment", "Error ", e);
                // If the code didn't successfully get the weather data, there's no point in attemping
                // to parse it.
                return null;
            } finally{
                if (urlConnection != null) {
                    urlConnection.disconnect();
                }
                if (reader != null) {
                    try {
                        reader.close();
                    } catch (final IOException e) {
                        Log.e("PlaceholderFragment", "Error closing stream", e);
                    }
                }
            }

            return rootView;
        }
    }
}