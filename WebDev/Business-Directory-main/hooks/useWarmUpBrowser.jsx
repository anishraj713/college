import { View, Text } from "react-native";
import React from "react";
import * as WebBrowser from "expo-web-browser";

export const useWarmUpBrowser = () => {
  React.useEffect(() => {
    void WebBrowser.warmUpAsync();
    return () => {
      void WebBrowser.coolDownAsync();
    };
  }, []);
};

// import { Platform } from "react-native";
// import * as WebBrowser from "expo-web-browser";
// import { useEffect } from "react";

// const useWarmUpBrowser = () => {
//   useEffect(() => {
//     if (Platform.OS !== "web") {
//       WebBrowser.warmUpAsync();
//     }
//   }, []);
// };

// export default useWarmUpBrowser;
